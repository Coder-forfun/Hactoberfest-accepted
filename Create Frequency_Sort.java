/*
This class implements sorting Strings based on their frequency.
The frequency is stored in the HashMap<String, ArrayList<Integer>>
Where the ArrayList<Integer> contains three items - Scores, Id, Correction
*/
import java.io.*;
import java.util.HashMap;
import java.util.Comparator;
import java.util.ArrayList;
public class PlaylistSort implements Comparator<String>{
  int SCORES_INDEX = 0;
  int TIE_INDEX = 2;
	private HashMap<String, ArrayList<Integer>> frequency = new HashMap<String, ArrayList<Integer>>();
	public PlaylistSort(HashMap<String, ArrayList<Integer>> arr) {
		frequency = arr;
	}
	public int compare(String s1, String s2) {
		if(frequency.get(s1).get(SCORES_INDEX) < frequency.get(s2).get(SCORES_INDEX)) {
			return 1;
		}
		else if(frequency.get(s1).get(SCORES_INDEX) > frequency.get(s2).get(SCORES_INDEX)) {
			return -1;
		}
		else {
			//If two playlists have the same score, we need to break the tie..so we compare the tie scores..
			if((frequency.get(s1).get(TIE_INDEX)) < (frequency.get(s2).get(TIE_INDEX))) {
				return 1;
			}
			else if((frequency.get(s1).get(TIE_INDEX)) > (frequency.get(s2).get(TIE_INDEX))) {
				return -1;
			}
			else {
				return 0;
			}
		}
	}
}
