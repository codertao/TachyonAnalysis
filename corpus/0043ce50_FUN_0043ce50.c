
void FUN_0043ce50(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = Ui_FindButton(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(iVar3 + 0x1f8) == param_3) {
    return;
  }
  *(int *)(iVar3 + 0x1f8) = param_3;
  *(int *)(iVar3 + 0x200) = param_3;
  switch(param_3) {
  case 1:
    *(undefined4 *)(iVar3 + 0xc4) = 0;
    break;
  case 2:
    *(undefined4 *)(iVar3 + 0xc4) = 1;
    break;
  default:
    goto switchD_0043ce9e_caseD_3;
  case 4:
    *(undefined4 *)(iVar3 + 0xc4) = 2;
    *(undefined4 *)(iVar3 + 0xdc) = *(undefined4 *)(iVar3 + 0x20c);
    goto switchD_0043ce9e_caseD_3;
  case 8:
    if ((((*(uint *)(iVar3 + 0x204) & 0x800) != 0) && (iVar2 = *(int *)(iVar3 + 500), iVar2 != 0))
       && (*(code **)(iVar2 + 0x40) != (code *)0x0)) {
      (**(code **)(iVar2 + 0x40))(*(undefined4 *)(iVar2 + 0x44));
      FUN_00437bf0(iVar3 + 0x204,0x800);
    }
    *(undefined4 *)(iVar3 + 0xc4) = 3;
    *(undefined4 *)(iVar3 + 0xdc) = 0;
    *(undefined4 *)(iVar3 + 0x1f8) = 8;
    goto switchD_0043ce9e_caseD_3;
  case 0x10:
    *(undefined4 *)(iVar3 + 0xc4) = 2;
  }
  *(undefined4 *)(iVar3 + 0xdc) = 0;
switchD_0043ce9e_caseD_3:
  *(uint *)(iVar3 + 0x204) = *(uint *)(iVar3 + 0x204) | 0x400;
  if (*(int *)(iVar3 + 0x1e4) != 0) {
    *(undefined4 *)(*(int *)(iVar3 + 0x1e4) + 0x120) = *(undefined4 *)(iVar3 + 0x1f8);
    puVar1 = (uint *)(*(int *)(iVar3 + 0x1e4) + 0x11c);
    *puVar1 = *puVar1 | 4;
  }
  return;
}

