
/* sweep: guess */

char Cbin_ClassifyValue(char *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  
  bVar1 = false;
  bVar2 = false;
  if (param_1 == (char *)0x0) {
switchD_00499c40_caseD_21:
    return '\0';
  }
  cVar3 = *param_1;
  while (cVar3 != '\0') {
    if (DAT_00561464 < 2) {
      uVar4 = (byte)PTR_DAT_00561258[*param_1 * 2] & 4;
    }
    else {
      uVar4 = Crt_isctype((int)*param_1,4);
    }
    if (uVar4 != 0) break;
    switch(*param_1) {
    case ' ':
      if (bVar1) {
        return '\0';
      }
      break;
    default:
      goto switchD_00499c40_caseD_21;
    case '+':
    case '-':
      if (bVar2) {
        return '\0';
      }
      bVar2 = true;
      break;
    case '.':
      if (bVar1) {
        return '\0';
      }
      bVar1 = true;
    }
    pcVar5 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar3 = *pcVar5;
  }
  cVar3 = *param_1;
  if (cVar3 == '\0') {
    return '\0';
  }
  do {
    if (DAT_00561464 < 2) {
      uVar4 = (byte)PTR_DAT_00561258[cVar3 * 2] & 4;
    }
    else {
      uVar4 = Crt_isctype((int)cVar3,4);
    }
    pcVar5 = param_1;
    if (uVar4 == 0) break;
    cVar3 = param_1[1];
    pcVar5 = param_1 + 1;
    if (cVar3 == '.') {
      if (bVar1) {
        return '\0';
      }
      bVar1 = true;
      pcVar5 = param_1 + 2;
    }
    else {
      if (cVar3 == '-') {
        return '\0';
      }
      if (cVar3 == '+') {
        return '\0';
      }
    }
    cVar3 = *pcVar5;
    param_1 = pcVar5;
  } while (cVar3 != '\0');
  if (*pcVar5 != '\0') {
    return '\0';
  }
  return bVar1 + '\x01';
}

