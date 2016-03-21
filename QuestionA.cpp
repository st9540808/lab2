#include "QuestionA.h"

void BodyMassIndex::setBmi(int height_cm, int weight_kg)
{
	height = (float)height_cm / 100;
	weight = weight_kg;
	
	bmi =  (float)weight / (height * height);
}

float BodyMassIndex::getBmi()
{
	return bmi;
}
	
string BodyMassIndex::getBmiCategory()
{
	if( bmi < 15 ) return "Very severely underweight";
	if( bmi >= 15 && bmi < 16  ) return "Severely underweight";
	if( bmi >= 16 && bmi < 18.5) return "Underweight";
	if( bmi >= 18.5 && bmi < 25) return "Normal";
	if( bmi >= 25 && bmi < 30)	 return "Overweight";
	if( bmi >= 30 && bmi < 35)	 return "Obese Class I (Moderately obese)";
	if( bmi >= 35 && bmi < 40)	 return "Obese Class II (Severely obese)";
	if( bmi >= 40) return "Obese Class III (Very severely obese)";
}
