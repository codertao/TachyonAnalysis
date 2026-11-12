
/* instantiate a SPED entity via its class vtable (+0x3c create); fire spawn events; set spawned
   flag +0x2c */

int Sped_Spawn(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = param_4;
  iVar3 = Sped_FindDef(param_4,param_1,&param_4);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x2c) == 0) {
      iVar1 = *(int *)(*(int *)(param_4 + 0x10) + 0x20 + *(int *)(iVar3 + 4) * 0x24);
      if ((iVar1 != 0) && (*(code **)(iVar1 + 0x3c) != (code *)0x0)) {
        param_5 = (**(code **)(iVar1 + 0x3c))(iVar3,iVar1,iVar2,param_5,1);
        if ((param_3 != 0) && (param_5 != 0)) {
          Sped_MsgSpawned(iVar2,1,*(undefined4 *)(iVar1 + 0x18));
        }
        uStack_18 = 1;
        iStack_14 = param_1;
        uStack_10 = 0xf;
        uStack_c = 0;
        uStack_8 = 0xffffffff;
        uStack_4 = 0xffffffff;
        Mission_PostEvent(&uStack_18,iVar2);
        iStack_14 = *(int *)(iVar3 + 0x54);
        if (iStack_14 != -1) {
          uStack_18 = 5;
          uStack_10 = 3;
          uStack_c = 0;
          uStack_8 = 0xffffffff;
          uStack_4 = 0xffffffff;
          Mission_PostEvent(&uStack_18,iVar2);
        }
        return param_5;
      }
    }
    else {
      Sped_LogAlreadySpawned(param_1);
    }
  }
  return 0;
}

