
/* store a directive's value (CHECK/COMPLETE) [tentative] */

void __thiscall Job_StoreVarValue(undefined4 param_1,int param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined3 local_4;
  undefined1 uStack_1;
  
  _local_4 = CONCAT13((char)((uint)param_1 >> 0x18),0x2b20);
  if (param_2 != 0) {
    if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
      *(undefined4 *)(param_2 + 0x60) = 0;
      iVar1 = FUN_004bcef7(param_3,&local_4);
      if (iVar1 == 0) goto LAB_00469c6e;
      do {
        iVar2 = str_cmp(iVar1,s_GREATER_THAN_0054a9f8);
        if (iVar2 == 0) {
          uVar3 = *(uint *)(param_2 + 0x60) | 0x801;
        }
        else {
          iVar2 = str_cmp(iVar1,s_LESS_THAN_0054a9ec);
          if (iVar2 == 0) {
            uVar3 = *(uint *)(param_2 + 0x60) | 0x802;
          }
          else {
            iVar2 = str_cmp(iVar1,s_EQUAL_TO_0054a9e0);
            if (iVar2 == 0) {
              uVar3 = *(uint *)(param_2 + 0x60) | 0x804;
            }
            else {
              iVar2 = str_cmp(iVar1,s_NOT_EQUAL_TO_0054a9d0);
              if (iVar2 == 0) {
                uVar3 = *(uint *)(param_2 + 0x60) | 0x808;
              }
              else {
                iVar2 = str_cmp(iVar1,&DAT_0054a9cc);
                if (iVar2 == 0) {
                  uVar3 = *(uint *)(param_2 + 0x60) | 0x80;
                }
                else {
                  iVar2 = str_cmp(iVar1,s_AND_NOT_0054a9c4);
                  if (iVar2 == 0) {
                    uVar3 = *(uint *)(param_2 + 0x60) | 0x20;
                  }
                  else {
                    iVar2 = str_cmp(iVar1,s_BLOCK_OR_0054a9b8);
                    if (iVar2 == 0) {
                      uVar3 = *(uint *)(param_2 + 0x60) | 0x100;
                    }
                    else {
                      iVar2 = str_cmp(iVar1,s_BLOCK_AND_0054a9ac);
                      if (iVar2 == 0) {
                        uVar3 = *(uint *)(param_2 + 0x60) | 0x200;
                      }
                      else {
                        iVar1 = str_cmp(iVar1,s_BLOCK_AND_NOT_0054a99c);
                        if (iVar1 == 0) {
                          uVar3 = *(uint *)(param_2 + 0x60) | 0x400;
                        }
                        else {
                          uVar3 = *(uint *)(param_2 + 0x60) | 0x40;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        *(uint *)(param_2 + 0x60) = uVar3;
LAB_00469c6e:
        iVar1 = FUN_004bcef7(0,&local_4);
      } while (iVar1 != 0);
      if (*(int *)(param_2 + 0x60) != 0) {
        return;
      }
    }
    *(undefined4 *)(param_2 + 0x60) = 0x40;
  }
  return;
}

