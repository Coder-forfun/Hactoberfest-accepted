// action type
export const UPDATE_PLAYER1_SCORE = 'UPDATE_PLAYER1_SCORE';
export const UPDATE_PLAYER2_SCORE = 'UPDATE_PLAYER2_SCORE';
export const PLAYER1_WINNER = 'PLAYER1_WINNER';
export const PLAYER2_WINNER = 'PLAYER2_WINNER';
export const RESET = 'RESET';

export const updatePlayer1Score = (score) => {
  return {
    type: UPDATE_PLAYER1_SCORE,
    score,
  };
};

export const updatePlayer2Score = (score) => {
  return {
    type: UPDATE_PLAYER2_SCORE,
    score,
  };
};

export const player1Won = (winner) => {
  return {
    type: PLAYER1_WINNER,
    winner,
  };
};

export const player2Won = (winner) => {
  return {
    type: PLAYER2_WINNER,
    winner,
  };
};

export const reset = () => {
  return {
    type: RESET,
  };
};
