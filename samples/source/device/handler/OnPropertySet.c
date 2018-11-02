/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2013-11-19
*
* @file   OnPropertySet.c
*
* @remark
*
*/

#include "OnPropertySet.h"
#include "../iid/IID.h"
#include "../print/PrintValue.h"

void OnPropertySet(PropertyOperation *o)
{
    printf("OnPropertySet: did=[%s], siid = [%d], piid = [%d]\n", o->pid.did, o->pid.siid, o->pid.iid);
    printValue(o->value);
}
