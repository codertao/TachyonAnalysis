
/* sweep */

void MountLine_AddRandom(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        ,undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  MountLine_Add(param_1,param_2,param_3,param_4,0xc,param_7,0,0,0,0,0,0,0,0);
  uVar3 = 0x19;
  uVar2 = 0;
  iVar1 = _rand();
  MountLine_Add(param_3,param_4,param_5,param_6,0xc,param_7,0,0,0,1,1,iVar1 % 10 + 0xf,uVar2,uVar3);
  return;
}

