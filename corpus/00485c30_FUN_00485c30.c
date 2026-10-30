
void FUN_00485c30(void)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  puVar2 = &DAT_00587b74;
  iVar3 = 5;
  do {
    if (puVar2[-0x44] != 0) {
      uVar1 = *puVar2;
      uVar5 = puVar2[-1] - puVar2[10];
      if ((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) <
          (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
        iVar6 = uVar5 - uVar1;
        if (iVar6 < 0x81) {
          if (iVar6 < -0x80) {
            iVar6 = -0x80;
          }
        }
        else {
          iVar6 = 0x80;
        }
        *puVar2 = uVar1 + iVar6;
      }
      else {
        *puVar2 = ((int)(((int)uVar5 >> 1) - uVar1) >> 2) + uVar1;
      }
      if ((int)*puVar2 < 0x81) {
        if ((int)*puVar2 < -0x80) {
          *puVar2 = 0xffffff80;
        }
      }
      else {
        *puVar2 = 0x80;
      }
      uVar4 = puVar2[10] + *puVar2;
      uVar1 = puVar2[-1] - uVar4;
      uVar5 = (int)uVar1 >> 0x1f;
      puVar2[10] = uVar4;
      puVar2[0x1e] = puVar2[0x1e] + ((int)*puVar2 >> 1);
      if ((int)((uVar1 ^ uVar5) - uVar5) < 0x100) {
        if (puVar2[-1] == puVar2[-3]) {
          puVar2[-1] = puVar2[-2];
        }
        else {
          puVar2[-1] = puVar2[-3];
        }
      }
      uVar1 = puVar2[-0xf];
      iVar6 = puVar2[-6] * 0x80 + puVar2[0xf] * -0x80;
      uVar4 = iVar6 >> 7;
      uVar5 = iVar6 >> 0x1f;
      if ((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) <
          (int)((uVar4 ^ uVar5) - uVar5)) {
        iVar6 = (int)(uVar4 * 0x80 + uVar1 * -0x80) >> 7;
        if (iVar6 < 0x81) {
          if (iVar6 < -0x80) {
            iVar6 = -0x80;
          }
        }
        else {
          iVar6 = 0x80;
        }
        puVar2[-0xf] = uVar1 + iVar6;
      }
      else {
        puVar2[-0xf] = ((int)((uVar4 & 0xfffffffe) * 0x40 + uVar1 * -0x80) >> 9) + uVar1;
      }
      uVar4 = puVar2[0xf] + puVar2[-0xf];
      uVar1 = puVar2[-6] - uVar4;
      uVar5 = (int)uVar1 >> 0x1f;
      puVar2[0xf] = uVar4;
      puVar2[0x23] = puVar2[0x23] + ((int)puVar2[-0xf] >> 1);
      if ((int)((uVar1 ^ uVar5) - uVar5) < 0x1000) {
        puVar2[0xf] = puVar2[-6];
        if (puVar2[-6] == puVar2[-0xc]) {
          puVar2[-6] = puVar2[-9];
        }
        else {
          puVar2[-6] = puVar2[-0xc];
        }
      }
      uVar1 = puVar2[-0xe];
      iVar6 = puVar2[-5] * 0x80 + puVar2[0x10] * -0x80;
      uVar4 = iVar6 >> 7;
      uVar5 = iVar6 >> 0x1f;
      if ((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) <
          (int)((uVar4 ^ uVar5) - uVar5)) {
        iVar6 = (int)(uVar4 * 0x80 + uVar1 * -0x80) >> 7;
        if (iVar6 < 0x81) {
          if (iVar6 < -0x80) {
            iVar6 = -0x80;
          }
        }
        else {
          iVar6 = 0x80;
        }
        puVar2[-0xe] = uVar1 + iVar6;
      }
      else {
        puVar2[-0xe] = ((int)((uVar4 & 0xfffffffe) * 0x40 + uVar1 * -0x80) >> 9) + uVar1;
      }
      uVar4 = puVar2[0x10] + puVar2[-0xe];
      uVar1 = puVar2[-5] - uVar4;
      uVar5 = (int)uVar1 >> 0x1f;
      puVar2[0x10] = uVar4;
      puVar2[0x24] = puVar2[0x24] + ((int)puVar2[-0xe] >> 1);
      if ((int)((uVar1 ^ uVar5) - uVar5) < 0x1000) {
        puVar2[0x10] = puVar2[-5];
        if (puVar2[-5] == puVar2[-0xb]) {
          puVar2[-5] = puVar2[-8];
        }
        else {
          puVar2[-5] = puVar2[-0xb];
        }
      }
      uVar1 = puVar2[-0xd];
      iVar6 = puVar2[-4] * 0x80 + puVar2[0x11] * -0x80;
      uVar4 = iVar6 >> 7;
      uVar5 = iVar6 >> 0x1f;
      if ((int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) <
          (int)((uVar4 ^ uVar5) - uVar5)) {
        iVar6 = (int)(uVar4 * 0x80 + uVar1 * -0x80) >> 7;
        if (iVar6 < 0x81) {
          if (iVar6 < -0x80) {
            iVar6 = -0x80;
          }
        }
        else {
          iVar6 = 0x80;
        }
        puVar2[-0xd] = uVar1 + iVar6;
      }
      else {
        puVar2[-0xd] = ((int)((uVar4 & 0xfffffffe) * 0x40 + uVar1 * -0x80) >> 9) + uVar1;
      }
      uVar4 = puVar2[0x11] + puVar2[-0xd];
      uVar1 = puVar2[-4] - uVar4;
      uVar5 = (int)uVar1 >> 0x1f;
      puVar2[0x11] = uVar4;
      puVar2[0x25] = puVar2[0x25] + ((int)puVar2[-0xd] >> 1);
      if ((int)((uVar1 ^ uVar5) - uVar5) < 0x1000) {
        puVar2[0x11] = puVar2[-4];
        if (puVar2[-4] == puVar2[-10]) {
          puVar2[-4] = puVar2[-7];
        }
        else {
          puVar2[-4] = puVar2[-10];
        }
      }
    }
    puVar2 = puVar2 + 0x6d;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

