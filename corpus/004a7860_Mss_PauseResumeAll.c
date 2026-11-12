
/* sweep */

void Mss_PauseResumeAll(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (param_1 == 1) {
    uVar3 = 0;
    puVar2 = DAT_00601e78;
    if (DAT_00601e74 != 0) {
      do {
        iVar1 = _AIL_sample_status_4(*puVar2);
        if (iVar1 == 4) {
          _AIL_stop_sample_4(*puVar2);
        }
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 4;
      } while (uVar3 < DAT_00601e74);
      return;
    }
  }
  else {
    uVar3 = 0;
    puVar2 = DAT_00601e78;
    if (DAT_00601e74 != 0) {
      do {
        iVar1 = _AIL_sample_status_4(*puVar2);
        if (iVar1 == 8) {
          _AIL_resume_sample_4(*puVar2);
        }
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 4;
      } while (uVar3 < DAT_00601e74);
    }
  }
  return;
}

