import React from 'react';
import { connect } from 'react-redux/es/exports';
import RollDie from './RollDie';
import {
  updatePlayer1Score,
  updatePlayer2Score,
  player1Won,
  player2Won,
} from '../actions/action';
import Popup from './Popup';
import Header from './Header';

const player1 = new URL('../../public/img/player1.png', import.meta.url)
  .pathname;
const player3 = new URL('../../public/img/player3.png', import.meta.url)
  .pathname;

class App extends React.Component {
  rollDie = () => {
    const { isPlayer1Turn, player1_score, player2_score } = this.props.players;
    let elDiceOne = document.getElementById('dice1');
    let diceOne = Math.floor(Math.random() * 6 + 1);
    console.log('face= ', diceOne);
    for (let i = 1; i <= 6; i++) {
      elDiceOne.classList.remove('show-' + i);
    }
    if (elDiceOne.classList.contains(`show- ${diceOne}`)) {
    }
    if (isPlayer1Turn) {
      if (player1_score + diceOne >= 15) {
        this.props.dispatch(updatePlayer1Score(player1_score + diceOne));
        this.props.dispatch(player1Won(true));
      } else {
        this.props.dispatch(updatePlayer1Score(player1_score + diceOne));
      }
    } else {
      if (player2_score + diceOne >= 15) {
        this.props.dispatch(updatePlayer2Score(player2_score + diceOne));
        this.props.dispatch(player2Won(true));
      } else {
        this.props.dispatch(updatePlayer2Score(player2_score + diceOne));
      }
    }
    elDiceOne.classList.add('show-' + diceOne);
  };

  render() {
    const {
      isPlayer1Turn,
      player1_score,
      player2_score,
      isPlayer1Won,
      isPlayer2Won,
    } = this.props.players;
    return (
      <div className='App'>
        <Header />
        <div className='container'>
          <div className='players'>
            <div className='player'>
              <div className='player-img'>
                <img src={player1} alt='player1' />
              </div>
              <div className='score'>
                <span>Score</span>
                <span>{player1_score}</span>
              </div>
            </div>

            <div className='middile'>
              <div className='target'>
                <span>Target score</span>
                <span>15</span>
              </div>
              <div className='dice'>
                <RollDie />
              </div>
              <div className='btn'>
                {isPlayer1Turn ? (
                  <button onClick={() => this.rollDie()}>
                    Roll dice
                    <img src={player1} style={{ width: 25 }} alt='player1' />
                  </button>
                ) : (
                  <button onClick={() => this.rollDie()}>
                    Roll dice
                    <img src={player3} style={{ width: 25 }} alt='player2' />
                  </button>
                )}
              </div>
            </div>
            <div className='player'>
              <div className='player-img'>
                <img src={player3} alt='player1' />
              </div>
              <div className='score'>
                <span>Score</span>
                <span>{player2_score}</span>
              </div>
            </div>
          </div>
        </div>
        {isPlayer1Won && (
          <Popup
            playerImg={player1}
            score={player1_score}
            dispatch={this.props.dispatch}
          />
        )}
        {isPlayer2Won && (
          <Popup
            playerImg={player3}
            score={player2_score}
            dispatch={this.props.dispatch}
          />
        )}
      </div>
    );
  }
}

function mapStateToProps(state) {
  console.log('state= ', state);
  return {
    players: state,
  };
}

const connectedAppComponent = connect(mapStateToProps)(App);

export default connectedAppComponent;
