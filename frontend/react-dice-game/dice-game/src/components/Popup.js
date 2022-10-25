import React, { Component } from 'react';
import { reset } from '../actions/action';
const trophy = new URL('../../public/img/trophy.png', import.meta.url).pathname;

export default class Popup extends Component {
  continue = (e) => {
    e.target.parentElement.parentElement.parentElement.style.display = 'none';
    this.props.dispatch(reset());
    console.log('e=', e.target.parentElement.parentElement.parentElement);
  };

  close = (e) => {
    e.target.parentElement.parentElement.style.display = 'none';
    this.props.dispatch(reset());
  };

  render() {
    console.log('this.props in popup=', this.props);
    const { playerImg, score } = this.props;
    return (
      <div id='myModal' className='modal'>
        <div className='modal-content'>
          <span onClick={this.close} className='close'>
            &times;
          </span>
          <div className='wrapper'>
            <img src={trophy} alt='trophy' />
          </div>
          <div className='congrats'>
            <h4>CONGRATULATIONS!</h4>
            <div className='player-img'>
              <img
                style={{ width: 35, height: 35 }}
                src={playerImg}
                alt='player'
              />
            </div>
            <p style={{ textAlign: 'center' }}>
              You won the game with {score} score
            </p>
            <div onClick={this.continue} className='continue'>
              Continue
            </div>
          </div>
        </div>
      </div>
    );
  }
}
