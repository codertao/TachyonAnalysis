
void FUN_004bb030(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_004bb020();
  *param_3 = param_1;
  if (0 < param_2) {
    puVar1 = &DAT_00564edc;
    iVar2 = param_2;
    do {
      *puVar1 = *(undefined4 *)(param_1 + -0x564edc + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (0 < DAT_006b0950) {
    iVar2 = (*DAT_006b0954)(&DAT_006b0960,param_2,&DAT_00564edc,&DAT_00564e54);
    if (iVar2 == 0) {
      return;
    }
    *param_3 = (int)&DAT_00564e54;
    if (1 < DAT_006b0950) {
      iVar2 = (*DAT_006b0954)(&DAT_006b0970,iVar2,&DAT_00564e54,&DAT_00564edc);
      if (iVar2 == 0) {
        return;
      }
      *param_3 = (int)&DAT_00564edc;
      if (2 < DAT_006b0950) {
        iVar2 = (*DAT_006b0954)(&DAT_006b0980,iVar2,&DAT_00564edc,&DAT_00564e54);
        if (iVar2 == 0) {
          return;
        }
        *param_3 = (int)&DAT_00564e54;
        if (3 < DAT_006b0950) {
          iVar2 = (*DAT_006b0954)(&DAT_006b0990,iVar2,&DAT_00564e54,&DAT_00564edc);
          if (iVar2 == 0) {
            return;
          }
          *param_3 = (int)&DAT_00564edc;
          if (4 < DAT_006b0950) {
            iVar2 = (*DAT_006b0954)(&DAT_006b09a0,iVar2,&DAT_00564edc,&DAT_00564e54);
            if (iVar2 == 0) {
              return;
            }
            *param_3 = (int)&DAT_00564e54;
            if (5 < DAT_006b0950) {
              iVar2 = (*DAT_006b0954)(&DAT_006b09b0,iVar2,&DAT_00564e54,&DAT_00564edc);
              if (iVar2 == 0) {
                return;
              }
              *param_3 = (int)&DAT_00564edc;
            }
          }
        }
      }
    }
  }
  return;
}

