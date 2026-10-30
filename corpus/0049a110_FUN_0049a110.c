
int FUN_0049a110(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 local_204;
  undefined1 local_202;
  undefined1 local_200 [256];
  undefined1 local_100 [256];
  
  local_204 = DAT_0053ebb4;
  local_202 = DAT_0053ebb6;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 4);
  uVar1 = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(param_1 + 8) = uVar1;
  iVar3 = 0;
  iVar2 = FUN_004bd452(uVar1,s________________0055d720,local_100,local_200);
  if (iVar2 == 2) {
    iVar2 = FUN_004bcef7(local_200,&local_204);
    while (iVar2 != 0) {
      iVar3 = iVar3 + 1;
      iVar2 = FUN_004bcef7(0,&local_204);
    }
  }
  return iVar3;
}

