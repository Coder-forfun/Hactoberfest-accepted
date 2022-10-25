import {
  PLAYER1_WINNER,
  PLAYER2_WINNER,
  RESET,
  UPDATE_PLAYER1_SCORE,
  UPDATE_PLAYER2_SCORE,
} from '../actions/action.js';

const intialPlayerState = {
  isPlayer1Turn: true,
  player1_score: 0,
  player2_score: 0,
  isPlayer1Won: false,
  isPlayer2Won: false,
};

function players(state = intialPlayerState, action) {
  console.log('players REDUCER CALLED', action);
  switch (action.type) {
    case UPDATE_PLAYER1_SCORE:
      return {
        ...state,
        player1_score: action.score,
        isPlayer1Turn: false,
      };
    case UPDATE_PLAYER2_SCORE:
      return {
        ...state,
        player2_score: action.score,
        isPlayer1Turn: true,
      };
    case PLAYER1_WINNER:
      return {
        ...state,
        isPlayer1Won: action.winner,
      };
    case PLAYER2_WINNER:
      return {
        ...state,
        isPlayer2Won: action.winner,
      };
    case RESET:
      return {
        ...state,
        player1_score: 0,
        player2_score: 0,
        isPlayer1Won: false,
        isPlayer2Won: false,
      };
    default:
      return state;
  }
}

export default players;
