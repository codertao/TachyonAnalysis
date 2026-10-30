
int * FUN_004b9f90(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (((DAT_006b0f4c == (int *)0x0) || (*DAT_006b0f4c != 0)) || (DAT_006b0f4c[1] != param_1)) {
    DAT_00564e44 = DAT_00564e44 + 1;
    DAT_006c8f68 = 0;
    DAT_006c8f70 = 0;
    if (*(int *)(param_1 + 0x20) == DAT_00564e48) {
      DAT_006b0f4c = (int *)(&DAT_006b0f60 + DAT_006c9018 * 0x30);
      piVar2 = (int *)(&DAT_006b0f30 + DAT_006c9018 * 0x30);
      for (iVar1 = DAT_006c9018; 0 < iVar1; iVar1 = iVar1 + -1) {
        if ((*piVar2 == 0) && (piVar2[1] == param_1)) {
          piVar3 = DAT_006b0f4c;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar3 = 0;
            piVar3 = piVar3 + 1;
          }
          DAT_006b0f4c[7] = DAT_006b0f44;
          DAT_006b0f4c[8] = DAT_006b0f50;
          DAT_006b0f4c[1] = param_1;
          DAT_006b0f4c[4] = DAT_006c8f64;
          *(undefined1 *)(DAT_006b0f4c + 6) = *(undefined1 *)(param_1 + 0x24);
          piVar2[0xb] = (int)DAT_006b0f4c;
          DAT_006c9018 = DAT_006c9018 + 1;
          return DAT_006b0f4c;
        }
        piVar2 = piVar2 + -0xc;
      }
    }
    DAT_006b0f4c = (int *)(&DAT_006b0f60 + DAT_006c9018 * 0x30);
    piVar2 = DAT_006b0f4c;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
    }
    DAT_006b0f4c[7] = DAT_006b0f44;
    DAT_006b0f4c[8] = DAT_006b0f50;
    DAT_006b0f4c[1] = param_1;
    DAT_006b0f4c[4] = DAT_006c8f64;
    *(undefined1 *)(DAT_006b0f4c + 6) = *(undefined1 *)(param_1 + 0x24);
    DAT_006c9018 = DAT_006c9018 + 1;
    *(int *)(param_1 + 0x20) = DAT_00564e48;
  }
  return DAT_006b0f4c;
}

