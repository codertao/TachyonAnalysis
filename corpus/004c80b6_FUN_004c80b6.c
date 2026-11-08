
void * FUN_004c80b6(LPVOID param_1,uint param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  LPVOID pvVar4;
  uint uVar5;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar1 = _malloc(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_004bd512(param_1);
    }
    else {
      do {
        if (param_2 < 0xffffffe1) {
          init_andor_enter_crit_section_idx(9);
          iVar2 = FUN_004c30a9(param_1);
          if (iVar2 == 0) {
            leave_crit_section_idx(9);
            if (param_2 == 0) {
              param_2 = 1;
            }
            param_2 = param_2 + 0xf & 0xfffffff0;
            pvVar4 = HeapReAlloc(DAT_006c9e9c,0,param_1,param_2);
          }
          else {
            if (DAT_005621a0 < param_2) {
LAB_004c8155:
              if (param_2 == 0) {
                param_2 = 1;
              }
              param_2 = param_2 + 0xf & 0xfffffff0;
              pvVar4 = HeapAlloc(DAT_006c9e9c,0,param_2);
              if (pvVar4 != (LPVOID)0x0) {
                uVar5 = *(int *)((int)param_1 + -4) - 1;
                if (param_2 <= uVar5) {
                  uVar5 = param_2;
                }
                FUN_004be0e0(pvVar4,param_1,uVar5);
                FUN_004c30d4(iVar2,param_1);
              }
            }
            else {
              iVar3 = FUN_004c38b4(iVar2,param_1,param_2);
              pvVar4 = param_1;
              if (iVar3 == 0) {
                pvVar4 = (LPVOID)FUN_004c33ff(param_2);
                if (pvVar4 == (LPVOID)0x0) goto LAB_004c8155;
                uVar5 = *(int *)((int)param_1 + -4) - 1;
                if (param_2 <= uVar5) {
                  uVar5 = param_2;
                }
                FUN_004be0e0(pvVar4,param_1,uVar5);
                FUN_004c30d4(iVar2,param_1);
              }
              if (pvVar4 == (LPVOID)0x0) goto LAB_004c8155;
            }
            leave_crit_section_idx(9);
          }
          if (pvVar4 != (LPVOID)0x0) {
            return pvVar4;
          }
        }
        if (DAT_0056519c == 0) {
          return (void *)0x0;
        }
        iVar2 = FUN_004c3014(param_2);
      } while (iVar2 != 0);
    }
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}

