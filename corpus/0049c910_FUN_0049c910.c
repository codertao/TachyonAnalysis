
void FUN_0049c910(int param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int local_c;
  int local_8;
  int local_4;
  
  bVar2 = false;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  piVar1 = *(int **)(PTR_DAT_0055d7cc + 8);
  if (param_1 == 0) {
    return;
  }
  while( true ) {
    piVar3 = piVar1;
    if (piVar3 == (int *)0x0) {
      FUN_0049c850(&local_c,&local_8,&local_4,param_2);
      *param_3 = *param_3 + local_c;
      *param_4 = *param_4 + local_8;
      *param_5 = *param_5 + local_4;
      return;
    }
    piVar1 = (int *)piVar3[3];
    if (((piVar1 < *(int **)(PTR_DAT_0055d7cc + 8)) ||
        (*(int **)(PTR_DAT_0055d7cc + 8) + *(int *)(PTR_DAT_0055d7cc + 4) * 4 < piVar1)) &&
       (piVar1 != (int *)0x0)) {
      bVar2 = true;
    }
    if ((param_2 == -1) || (piVar3[1] == param_2)) {
      if ((piVar3[2] == 0) || (bVar2)) {
        c_fprintf(param_1,s_ptr__7x__size____7x__end____7x__n_0055d8dc,piVar3 + 4,*piVar3,
                  *piVar3 + 0x10 + (int)piVar3,piVar1 + 4,piVar3[1]);
      }
      else {
        c_fprintf(param_1,s_ptr__7x__size____7x__end____7x__n_0055d914,piVar3 + 4,*piVar3,
                  *piVar3 + 0x10 + (int)piVar3,piVar1 + 4,piVar3[1],piVar3[2]);
      }
    }
    if ((piVar1 != (int *)0x0) && (piVar1 < (int *)(*piVar3 + 0x10 + (int)piVar3))) break;
    if (bVar2) {
LAB_0049c9fd:
      c_fprintf(param_1,s______Corrupt_PTR__x______0055d8a0,piVar3 + 4);
      return;
    }
  }
  MessageBoxA(DAT_0060395c,s_Memory_Overlap_0055d8bc,s_module_CheckMem_0055d8cc,0);
  goto LAB_0049c9fd;
}

