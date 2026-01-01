// import logo from './logo.svg';
import { useState } from 'react';
import './App.css';
// import express from 'express';
import axios from 'axios';

function App() {
  const [formData, setFormData] = useState({
    name: '',
    email: '',
    password: '',
  });
  const [button, setButton] = useState(false);
  const [data, setData] = useState([]);

  const fetchUsers = async () => {
    try {
      const res = await axios.get('/list');
      setData(res.data.allUsers);
    } catch (err) {
      console.log(err);
    }
  }

  const check = async () => {
    setButton(!button);
    await fetchUsers();
  }

  const handleChange = (e) => {
    setFormData({ ...formData, [e.target.name]: e.target.value });
  };

  const handleSubmit = async (e) => {
    e.preventDefault();

    try {
      const response = await axios.post('/register', formData);
      console.log('Success:', response.data);
      setFormData({ name: '', email: '', password: '' });
      fetchUsers();
    } catch (error) {
      console.error('Error:', error.response ? error.response.data : error.message);
      alert('Failed to register user.');
    }
  }


  return (
    <>
      {
        button
          ?
          <div className="container" style={{ marginTop: "10vh" }}>
            {data.map((user) => (
              <div key={user._id} className="card" style={{ width: "18rem" }}>
                <div className="card-body">
                  <h5 className="card-title">{user.name}</h5>
                  <h6 className="card-subtitle mb-2 text-body-secondary">{user.email}</h6>
                </div>
              </div>
            ))}
          </div>
          :
          <div className="container p-3 border border-1 rounded" style={{ marginTop: "10vh", width: "18rem" }}>
            <form onSubmit={handleSubmit}>
              <div className="mb-3">
                <label htmlFor="exampleInputEmail1" className="form-label">Name </label>
                <input type="text" className="form-control" id="exampleInputname" name="name" value={formData.name} onChange={handleChange} />
              </div>
              <div className="mb-3">
                <label htmlFor="exampleInputEmail1" className="form-label">Email address</label>
                <input type="email" className="form-control" id="exampleInputEmail1" name="email" value={formData.email} onChange={handleChange} aria-describedby="emailHelp" />
              </div>
              <div className="mb-3">
                <label htmlFor="exampleInputPassword1" className="form-label">Password</label>
                <input type="password" className="form-control" id="exampleInputPassword1" name="password" value={formData.password} onChange={handleChange} />
              </div>
              <button type="submit" className="btn btn-primary">Submit</button>
              <button onClick={check} className=" ms-2 btn btn-primary">Check User</button>
            </form>
          </div>

      }
    </>
  );
}

export default App;
