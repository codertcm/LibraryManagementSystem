#pragma once
#include <bits/stdc++.h>

#include "field.h"
#include "abstractobject.h"

using namespace std;


class Object:public AbstractObject<set<Field>>{
public:
	using AbstractObject::AbstractObject;
	virtual vector<string> uniqueKey() const=0;
	virtual vector<string> implicitKey() const=0;
	virtual vector<string> explicitKey() const=0;
	virtual FormatInfo formatInfo() const;
	virtual FormatInfo invalidFields() const;
};