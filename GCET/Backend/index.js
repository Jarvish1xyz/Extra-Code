require('dotenv').config();
const express = require('express');
const cors = require('cors');
const mongoose = require('mongoose');
const bcrypt = require('bcrypt');
const jwt = require('jsonwebtoken');
const User = require('./models/user.model');
const url = process.env.MONGOURL;
const port = process.env.PORT;

const app = express();
app.use(cors());
app.use(express.json());

mongoose.connect(url).then(() => {
    console.log("Connected to DB");
}).catch((err) => {
    console.log(err);
});


app.get('/list', async (req, res) => {
    try {
        const users = await User.find();

        res.json({msg:"All users fetched", allUsers:users});
    }catch(err) {
        res.json({err:err.message});
    }
});


app.post('/register', async (req, res) => {
    try {
        const {name, email, password} = req.body;
        const hashedPassword = await bcrypt.hash(password, 10);

        const user = await User.create({
            name,
            email,
            password: hashedPassword
        });

        res.json({msg:"User registered successfully", userDetails:user});
    }catch(err) {
        res.json({err:err.message});
    }
})

app.listen(port, () => {
    console.log(`Server is running @ ${port}`);
})