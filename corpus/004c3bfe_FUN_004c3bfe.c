
float10 FUN_004c3bfe(undefined4 param_1,undefined4 param_2,undefined8 param_3,double param_4,
                    undefined4 param_5)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_004c3f49(param_1,&param_4,param_5);
  if (iVar1 == 0) {
    FUN_004c3c96();
  }
  iVar1 = FUN_004c4235(param_1);
  if ((DAT_005627f0 == 0) && (iVar1 != 0)) {
    fVar2 = (float10)FUN_004c4160(iVar1,param_2,param_3,0,param_4,param_5);
    return fVar2;
  }
  FUN_004c41e8(iVar1);
  FUN_004c43d5();
  return (float10)param_4;
}

