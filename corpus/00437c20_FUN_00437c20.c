
int FUN_00437c20(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_1 == 0) {
    iVar1 = 0;
    FUN_0048e3d0(&param_1,param_2,4,s_MNU_Memory_Block_0053fd40,0xa000);
  }
  else {
    iVar1 = FUN_0049c780(param_1);
    param_1 = FUN_0049c6f0(param_1,param_2,4);
  }
  if (param_1 != 0) {
    iVar2 = FUN_0049c780(param_1);
    puVar4 = (undefined4 *)(iVar1 + param_1);
    for (uVar3 = (uint)(iVar2 - iVar1) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = iVar2 - iVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return param_1;
}

