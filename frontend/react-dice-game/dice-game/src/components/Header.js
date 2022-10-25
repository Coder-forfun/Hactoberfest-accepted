import React, { Component } from 'react';
import { connect } from 'react-redux/es/exports';
const player1 = new URL('../../public/img/player1.png', import.meta.url)
  .pathname;
const player3 = new URL('../../public/img/player3.png', import.meta.url)
  .pathname;
class Header extends Component {
  render() {
    console.log('props in header=', this.props);
    const { player2_score, player1_score } = this.props.players;
    return (
      <header>
        <div className='player-left'>
          <div className='player-header-img'>
            <img
              style={{ width: 35, height: 35 }}
              src={player1}
              alt='player1'
            />
          </div>
          <div className='score-left'>
            <span>Score</span>
            <span>{player1_score}</span>
          </div>
        </div>
        <h2>Dice Game</h2>
        <div className='player-right'>
          <div className='player-header-img'>
            <img
              style={{ width: 35, height: 35 }}
              src={player3}
              alt='player3'
            />
          </div>
          <div className='score-right'>
            <span>Score</span>
            <span>{player2_score}</span>
          </div>
        </div>
      </header>
    );
  }
}
function mapStateToProps(state) {
  return {
    players: state,
  };
}

const connectedAppComponent = connect(mapStateToProps)(Header);

export default connectedAppComponent;
