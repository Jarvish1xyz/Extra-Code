require('dotenv').config();
const express = require('express');
const cors = require('cors');
const mongoose = require('mongoose');
const authRoute = require('./routes/auth.route')
const profileRoute = require('./routes/profile.route')
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

app.use('/api/auth', authRoute)
app.use('/api/user', profileRoute)

app.listen(port, () => {
    console.log(`Server is running @ ${port}`);
})
