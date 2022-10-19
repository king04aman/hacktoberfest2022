import React from 'react';
import {} from 'react-router-dom';
import '../App.css';
import { Button } from './Button';
import './HeroSection.css';

function HeroSection() {
return (
<div className='hero-container'>
{/* <video src='/public/videos/video-1.mp4' autoPlay loop muted /> */}
<video src={require('../videos/video-1.mp4')} autoPlay loop muted />

<h1>ADVENTURE AWAITS</h1>
<p>What are you waiting for?</p>
<div className='hero-btns'>
<Button
className='btns'
buttonStyle='btn--outline'
buttonSize='btn--large'
>
GET STARTED
</Button>
<a href='https://www.youtube.com/watch?v=BHACKCNDMW8'>
<button
className='button1'
buttonStyle='btn--primary'
buttonSize='btn--large'
// onClick={console.log('hey')}
// onClick="window.location.href ='https://www.youtube.com/watch?v=dzdiMRovyK0';"
>
WATCH TRAILER <i className='far fa-play-circle' />
</button> </a>
</div>
</div>
);
}

export default HeroSection;  