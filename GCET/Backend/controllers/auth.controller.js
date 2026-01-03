const jwt = require('jsonwebtoken');
const bcrypt = require('bcrypt');
const User = require('../models/User');

const register = async (req, res) => {
    try {
        const { name, username, phone, email, password } = req.body;
        const hashedPassword = await bcrypt.hash(password, 10);

        const student = await User.create({
            name,
            username,
            phone,
            email,
            password: hashedPassword
        });
        res.json({ msg: "New student registered", newStudent: student })
    } catch (err) {
        res.json({ err: err.message, why:"G" });
    }
}

const login = async (req, res) => {
    try {
        const { email, password } = req.body;

        const user = await User.findOne({ email });
        if (!user) return res.status(401).json({ message: "Invalid credentials" });

        const isMatch = await bcrypt.compare(password, user.password);
        if (!isMatch) return res.status(401).json({ message: "Invalid credentials is",pass:password, upass:user.pass});

        const token = jwt.sign(
            {id:user._id, email:user.email},
            process.env.JWT_SECRET,
            {expiresIn: "1d"}
        );

        res.status(200).json({
            msg:"Login successful",
            token,
        });
    }catch(err) {
        res.json({err:err.message})
    }
}

module.exports = {register, login};