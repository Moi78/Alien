// Fill out your copyright notice in the Description page of Project Settings.

#include "OperatorExtension.h"

bool UOperatorExtension::isBetween(float Min, float Max,float toCheck)
{
	if (toCheck < Max && toCheck > Min) {
		return true;
	}
	else {
		return false;
	}
}
