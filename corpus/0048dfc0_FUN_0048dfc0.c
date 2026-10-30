
void __thiscall FUN_0048dfc0(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 local_4;
  
  iVar1 = param_2;
  if (param_2 != 0) {
    *(uint *)(param_3 + 0x54) = param_2;
    piVar3 = (int *)(param_2 + 0x20);
    puVar4 = *(uint **)(param_2 + 0x24);
    param_2 = 0;
    local_4 = param_1;
    if (*piVar3 != 0) {
      do {
        piVar3 = (int *)puVar4[3];
        uVar2 = 0;
        if (*puVar4 != 0) {
          do {
            if (*piVar3 == 3) {
              Var_GetByIndex(DAT_005a6148,(uint)piVar3[1] >> 0x10,piVar3[1] & 0xffff,&local_4);
              FUN_0048de40(piVar3[1],local_4,iVar1,param_3);
            }
            uVar2 = uVar2 + 1;
            piVar3 = piVar3 + 10;
          } while (uVar2 < *puVar4);
        }
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 5;
      } while (param_2 < *(uint *)(iVar1 + 0x20));
    }
  }
  return;
}

