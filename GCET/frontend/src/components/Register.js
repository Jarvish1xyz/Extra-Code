import axios from "axios";
import { useState } from "react";
import { useNavigate } from "react-router-dom";

function Register() {

     const [formData, setFormData] = useState({
        name: '',
        username: '',
        phone: '',
        email: '',
        password: '',
    });
    const nevigate = useNavigate();

    const check = () => {
        nevigate('/login')
    }

    const handleChange = (e) => {
        setFormData({ ...formData, [e.target.name]: e.target.value });
    };

    const handleSubmit = async (e) => {
        e.preventDefault();

        try {
            const response = await axios.post('/api/auth/register', formData);
            console.log('Success:', response.data);
            setFormData({ email: '', password: '' });
            check()
            // fetchUsers();
        } catch (error) {
            console.error('Error:', error.response ? error.response.data : error.message);
            alert('Failed to register user.');
        }
    }

    return (
        <>
            <div className="container p-3 border border-1 rounded" style={{ marginTop: "10vh", width: "18rem" }}>
                <form onSubmit={handleSubmit}>
                    <div className="mb-3">
                        <label htmlFor="name" className="form-label">Name</label>
                        <input type="text" className="form-control" id="name" name="name" value={formData.name} onChange={handleChange}/>
                    </div>
                    <div className="mb-3">
                        <label htmlFor="username" className="form-label">Username</label>
                        <input type="text" className="form-control" id="username" name="username" value={formData.username} onChange={handleChange} aria-describedby="emailHelp" />
                    </div>
                    <div className="mb-3">
                        <label htmlFor="phone" className="form-label">Phone no.</label>
                        <input type="tel" className="form-control" id="phone" name="phone" value={formData.phone} onChange={handleChange} aria-describedby="emailHelp" />
                    </div>
                    <div className="mb-3">
                        <label htmlFor="exampleInputEmail1" className="form-label">Email address</label>
                        <input type="email" className="form-control" id="exampleInputEmail1" name="email" value={formData.email} onChange={handleChange} aria-describedby="emailHelp" />
                    </div>
                    <div className="mb-3">
                        <label htmlFor="exampleInputPassword1" className="form-label">Password</label>
                        <input type="password" className="form-control" id="exampleInputPassword1" name="password" value={formData.password} onChange={handleChange} />
                    </div>
                    <button type="submit" className="btn btn-primary">Register</button>
                    <button type="button" onClick={check} className=" ms-2 btn btn-primary">Login</button>
                </form>
            </div>
        </>
    )
}

export default Register;