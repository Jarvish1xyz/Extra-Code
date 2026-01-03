const express = require("express");
const router = express.Router();

const { profile } = require("../controllers/profile.controller");
const authMiddleware = require("../middleware/auth.middle");


router.get("/profile", authMiddleware, profile);

module.exports = router;