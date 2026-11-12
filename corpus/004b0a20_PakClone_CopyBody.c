
/* sweep: guess */

void PakClone_CopyBody(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  piVar2 = param_2;
  *param_2 = 0;
  *param_3 = 0;
  if (param_1 != 0) {
    param_2 = (int *)0x0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      piVar4 = (int *)(*(int *)(param_1 + 0x38) + param_1 + 4);
      do {
        iVar1 = *piVar4;
        puVar6 = (undefined4 *)(*(int *)(iVar1 + 8) + iVar1);
        uVar5 = 0;
        if (*(int *)(iVar1 + 4) != 0) {
          do {
            iVar3 = PakClone_CalcSize(*puVar6);
            *piVar2 = *piVar2 + iVar3;
            iVar3 = PakClone_CopyParts(*puVar6);
            *param_3 = *param_3 + iVar3;
            uVar5 = uVar5 + 1;
            puVar6 = puVar6 + 0xb;
          } while (uVar5 < *(uint *)(iVar1 + 4));
        }
        param_2 = (int *)((int)param_2 + 1);
        piVar4 = piVar4 + 2;
      } while (param_2 < *(uint *)(param_1 + 0x2c));
    }
  }
  return;
}

