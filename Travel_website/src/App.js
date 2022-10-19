import React from 'react';
import Navbar from './components/Navbar';
import {BrowserRouter as Router, Routes, Route} from 'react-router-dom';
import './App.css';
import Home from './components/pages/Home';
import Services from './components/pages/Services';
import Products from './components/pages/Products';
import SignUp from './components/pages/SignUp';



function App() {
  return (
    <>
    <Router>
      <Navbar />
    {/* <Router>
      <Outlet>
        
        <Route path='/' exact component={<Home />}/>
      </Outlet>
    </Router> */}
      <Routes>
        <Route path="/" element={<Home />} />
        <Route path='/services' element = {<Services />} />
        <Route path='/products' element = {<Products />} />
        <Route path='/sign-up' element = {<SignUp />} />
      </Routes>

    </Router>
    </>
  );
}

export default App;
