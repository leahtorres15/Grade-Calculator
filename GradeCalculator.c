#include <stdio.h>

float CategoryScore(float catgrade, float catweight);
float Weight(float hwt, float qwt, float lwt, float pwt, float mwt, float fwt);
float FinalGrade(float hw, float qz, float lab, float part, float mtm, float fin, float wt);

int main()
{
   float hws, hww, qzs, qzw, ls, lw, ps, pw, ms, mw, fs, fw, totalweight, finalgrade;
   float homework, quiz, lab, participation, midterms, final;

   printf("GRADE CALCULATOR\n");
   printf("Input your score(%%) and the weight(%%) of the following:\n\n");
   printf("Homework: ");
   scanf("%f%f", &hws, &hww);
   printf("Labs: ");
   scanf("%f%f", &ls, &lw);
   printf("Participation: ");
   scanf("%f%f", &ps, &pw);
   printf("Quizes: ");
   scanf("%f%f", &qzs, &qzw);
   printf("Midterm Exams: ");
   scanf("%f%f", &ms, &mw);
   printf("Final Exam: ");
   scanf("%f%f", &fs, &fw);

   homework = CategoryScore(hws, hww);
   quiz = CategoryScore(qzs, qzw);
   lab = CategoryScore(ls, lw);
   participation = CategoryScore(ps, pw);
   midterms = CategoryScore(ms, mw);
   final = CategoryScore(fs, fw);
   totalweight = Weight(hww, qzw, lw, pw, mw, fw);
   finalgrade = FinalGrade(homework, quiz, lab, participation, midterms, final, totalweight);

   printf("Your Grade Under These Conditions: %0.4f\n", finalgrade);
   return 0;
}

float CategoryScore(float catgrade, float catweight)
{
   float score;
   score = catgrade * (catweight/100);
   return score;
}

float Weight(float hwt, float qwt, float lwt, float pwt, float mwt, float fwt)
{
   float wt;
   wt = (hwt + qwt + lwt + pwt + mwt + fwt)/100;
   return wt;
}

float FinalGrade(float hw, float qz, float lab, float part, float mtm, float fin, float wt)
{
   float overallscore;
   overallscore = (hw + qz + lab + part + mtm + fin) / wt;
   return overallscore;
}
