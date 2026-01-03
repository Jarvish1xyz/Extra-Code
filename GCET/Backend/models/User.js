const mongoose = require('mongoose');

const userSchema = mongoose.Schema({
    name:{type:String, required:true, lowercase:true, index:true},
    username:{type:String, lowercase:true},
    phone:Number,
    email:{type:String, required:true, unique:true},
    password:String
}, {timestamps:true})

module.exports = mongoose.model('User', userSchema);