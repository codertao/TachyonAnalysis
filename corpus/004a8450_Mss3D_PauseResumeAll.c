
/* sweep */

void Mss3D_PauseResumeAll(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_2 + 0xc) != 0) {
    puVar3 = *(undefined4 **)(param_2 + 8);
    if (param_1 == 0) {
      uVar2 = 0;
      if (*(int *)(param_2 + 4) != 0) {
        do {
          iVar1 = _AIL_3D_sample_status_4(*puVar3);
          if (iVar1 == 8) {
            _AIL_resume_3D_sample_4(*puVar3);
          }
          uVar2 = uVar2 + 1;
          puVar3 = puVar3 + 0xe;
        } while (uVar2 < *(uint *)(param_2 + 4));
      }
    }
    else {
      uVar2 = 0;
      if (*(int *)(param_2 + 4) != 0) {
        do {
          iVar1 = _AIL_3D_sample_status_4(*puVar3);
          if (iVar1 == 4) {
            _AIL_stop_3D_sample_4(*puVar3);
          }
          uVar2 = uVar2 + 1;
          puVar3 = puVar3 + 0xe;
        } while (uVar2 < *(uint *)(param_2 + 4));
        return;
      }
    }
  }
  return;
}

