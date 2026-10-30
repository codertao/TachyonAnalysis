
void FUN_004b2c10(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  piVar3 = param_2;
  if (*(int *)(param_1 + 0x40) != 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    FUN_004b2ac0(param_1,param_2,param_3);
    FUN_004b21c0(param_1);
    FUN_004b1bb0(local_18,param_1 + 0x34);
    iVar4 = FUN_004b1cd0(*(undefined4 *)(param_1 + 0x40));
    piVar6 = (int *)(iVar4 + 0xc);
    param_2 = (int *)0x0;
    if (*(int *)(iVar4 + 4) != 0) {
      do {
        iVar1 = *piVar6;
        iVar2 = piVar6[10];
        param_1 = 0;
        if (*(int *)(iVar1 + 0x28) != 0) {
          pfVar9 = (float *)(*(int *)(iVar1 + 0x40) + 0x28);
          do {
            local_38 = (undefined4)(longlong)ROUND(pfVar9[-1]);
            local_30 = local_38;
            local_38 = (undefined4)(longlong)ROUND(*pfVar9);
            local_2c = local_38;
            local_38 = (undefined4)(longlong)ROUND(pfVar9[1]);
            local_28 = local_38;
            FUN_004b24d0(&local_30,&local_24);
            iVar5 = *(int *)(iVar2 + 0x30) + local_24;
            iVar7 = *(int *)(iVar2 + 0x34) + local_20;
            iVar8 = *(int *)(iVar2 + 0x38) + local_1c;
            iVar10 = *piVar3;
            if (iVar5 < *piVar3) {
              iVar10 = iVar5;
            }
            *piVar3 = iVar10;
            iVar10 = piVar3[1];
            if (iVar7 < piVar3[1]) {
              iVar10 = iVar7;
            }
            piVar3[1] = iVar10;
            iVar10 = piVar3[2];
            if (iVar8 < piVar3[2]) {
              iVar10 = iVar8;
            }
            piVar3[2] = iVar10;
            if (iVar5 <= *param_3) {
              iVar5 = *param_3;
            }
            *param_3 = iVar5;
            iVar5 = param_3[1];
            if (param_3[1] < iVar7) {
              iVar5 = iVar7;
            }
            param_3[1] = iVar5;
            if (iVar8 <= param_3[2]) {
              iVar8 = param_3[2];
            }
            param_3[2] = iVar8;
            param_1 = param_1 + 1;
            pfVar9 = pfVar9 + 0xc;
          } while (param_1 < *(uint *)(iVar1 + 0x28));
        }
        param_2 = (int *)((int)param_2 + 1);
        piVar6 = piVar6 + 0xb;
      } while (param_2 < *(uint *)(iVar4 + 4));
    }
  }
  return;
}

