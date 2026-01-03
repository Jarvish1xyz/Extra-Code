const User = require('../models/User');

const profile = async (req, res) => {
  try {
    const userd = await User.findById(req.user.id)

    res.json({ user:userd });
  } catch (err) {
    res.status(401).json({ message: "Invalid token" });
  }
};

module.exports = {profile};