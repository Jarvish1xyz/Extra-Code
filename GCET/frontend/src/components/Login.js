import { useState } from 'react';
import axios from 'axios';
import { useNavigate } from 'react-router-dom';

function Login() {
    const [formData, setFormData] = useState({
        email: '',
        password: '',
    });
    const nevigate = useNavigate();

    const check = () => {
        nevigate('/')
    }

    const handleChange = (e) => {
        setFormData({ ...formData, [e.target.name]: e.target.value });
    };

    const handleSubmit = async (e) => {
        e.preventDefault();

        try {
            const response = await axios.post('/api/auth/login', formData);
            console.log('Success:', response.data);
            localStorage.setItem("token", response.data.token);
            localStorage.setItem("user", response.data.user);
            setFormData({ email: '', password: '' });
            nevigate('/profile');
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
                        <label htmlFor="exampleInputEmail1" className="form-label">Email address</label>
                        <input type="email" className="form-control" id="exampleInputEmail1" name="email" value={formData.email} onChange={handleChange} aria-describedby="emailHelp" />
                    </div>
                    <div className="mb-3">
                        <label htmlFor="exampleInputPassword1" className="form-label">Password</label>
                        <input type="password" className="form-control" id="exampleInputPassword1" name="password" value={formData.password} onChange={handleChange} />
                    </div>
                    <button type="submit" className="btn btn-primary">Login</button>
                    <button type="button" onClick={check} className=" ms-2 btn btn-primary">Rgister</button>
                </form>
            </div>

        </>
    );
}

export default Login;