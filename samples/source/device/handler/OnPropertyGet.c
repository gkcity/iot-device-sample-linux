/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2013-11-19
*
* @file   OnPropertyGet.c
*
* @remark
*
*/

#include "OnPropertyGet.h"
#include "../iid/IID.h"

void OnPropertyGet(PropertyOperation *o)
{
    printf("OnPropertyGet: did = %s, siid = %d, piid = %d\n", o->pid.did, o->pid.siid, o->pid.iid);
}
