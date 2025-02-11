#include <stdio.h>

int Recursive(int count, int JikyuA, int gokeiA, int JikyuB, int gokeiB) {

	// ‰½‰ñÄ‹N‚µ‚½‚©
	count++;

	// ‚»‚ê‚¼‚ê‹‹—¿‚ğ‡Œv‚É‘«‚µ‚Ş
	gokeiA += JikyuA;
	gokeiB += JikyuB;

	// ‰Â•Ï‹‹‚Ì‡Œv‚ªŒÅ’è‹‹‚Ì‡Œv‚ğ’´‚¦‚½‚çI—¹
	if (gokeiA >= gokeiB) {

		printf("%dŠÔ–Ú || •Ï“®‹‹%d‰~ ‘x‹‹%d‰~ || ŒÅ’è‹‹%d‰~ ‘x‹‹%d‰~\n", count, JikyuA, gokeiA, JikyuB, gokeiB);

		return(1);

	}
	else {

		printf("%dŠÔ–Ú || •Ï“®‹‹%d‰~ ‘x‹‹%d‰~ || ŒÅ’è‹‹%d‰~ ‘x‹‹%d‰~\n", count, JikyuA, gokeiA, JikyuB, gokeiB);

		// •Ï“®‹‹XV
		JikyuA = JikyuA * 2 - 50;

		// Ä‹Aˆ—
		return (Recursive(count, JikyuA, gokeiA, JikyuB, gokeiB));
	}
}

int main() {

	// ‰½‰ñÄ‹N‚µ‚½‚©‚ğ”‚¦‚é
	int count = 0;

	// •Ï“®‹‹
	int JikyuA = 100;

	// ‘x‹‹
	int gokeiA = 0;

	// ŒÅ’è‹‹
	int JikyuB = 1072;

	// ‘x‹‹
	int gokeiB = 0;

	// Ä‹AŒÄ‚Ño‚µ
	Recursive(count, JikyuA, gokeiA, JikyuB, gokeiB);

	return 0;
}
