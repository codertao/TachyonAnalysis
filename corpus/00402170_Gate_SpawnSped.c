
/* spawn a SPED on gate transit */

void Gate_SpawnSped(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar1 = FUN_00435390(*(int *)(param_2 + 0xf0) + 0x38);
    if (iVar1 != 0) {
      iVar2 = FUN_00434770(iVar1,param_1);
      if (iVar2 != 0) {
        iVar3 = FUN_00426f90(*(int *)(*(int *)(param_2 + 100) + 0x3c) + 0xc,iVar1,
                             *(undefined4 *)(*(int *)(param_2 + 0xf0) + 100));
        if (iVar3 != 0) {
          if (DAT_005a6730 != 0) {
            Sped_LogSpawn(*(undefined4 *)(iVar2 + 0x20),param_1);
          }
          FUN_004368b0(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(*(int *)(iVar3 + 0xf0) + 0x20),
                       0xfa,iVar1);
          FUN_00457880(iVar1,1);
        }
      }
    }
  }
  return;
}

