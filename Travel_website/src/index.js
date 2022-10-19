import App from './App';



// // ReactDOM.render(<App />, document.getElementById('root'));

// const root = ReactDOM.createRoot(document.getElementById("app"));
// root.render( <App />);

import { createRoot } from 'react-dom/client';
const container = document.getElementById('root');
const root = createRoot(container);
root.render(<App tab="home" />);


