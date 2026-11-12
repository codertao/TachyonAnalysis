
/* sweep: guess */

void MountLine_Animate(float param_1)

{
  ulonglong uVar1;
  float *pfVar2;
  float fVar3;
  uint uVar4;
  float local_8;
  
  uVar4 = 0;
  pfVar2 = (float *)&DAT_005842a4;
  do {
    if (pfVar2[0x10] != 0.0) {
      if (pfVar2[3] == 0.0) {
        pfVar2[-5] = pfVar2[-7];
        pfVar2[-4] = pfVar2[-6];
        if (pfVar2[0xf] != 0.0) {
          pfVar2[0xd] = 1.4013e-45;
          goto LAB_0046eb50;
        }
      }
      else {
        fVar3 = (float)(int)pfVar2[-5] + *pfVar2 + pfVar2[-3];
        local_8 = (float)(longlong)ROUND(fVar3);
        pfVar2[-5] = local_8;
        *pfVar2 = fVar3 - (float)(int)local_8;
        fVar3 = (float)(int)pfVar2[-4] + pfVar2[-2] + pfVar2[1];
        local_8 = (float)(longlong)ROUND(fVar3);
        pfVar2[-4] = local_8;
        pfVar2[3] = (float)((int)pfVar2[3] + -1);
        pfVar2[1] = fVar3 - (float)(int)local_8;
LAB_0046eb50:
        if (pfVar2[0xf] != 0.0) {
          if (pfVar2[0xd] == 0.0) {
LAB_0046ebc5:
            fVar3 = param_1;
            if (param_1 == 0.0) {
              fVar3 = pfVar2[8];
            }
            pfVar2[7] = fVar3;
          }
          else if (pfVar2[4] == 0.0) {
            if ((pfVar2[0xd] == 0.0) || (pfVar2[0xe] != 0.0)) goto LAB_0046ebc5;
            pfVar2[0xe] = 1.4013e-45;
            pfVar2[-1] = -pfVar2[-1];
            pfVar2[2] = 0.0;
            pfVar2[4] = pfVar2[5];
          }
          else {
            pfVar2[4] = (float)((int)pfVar2[4] + -1);
            fVar3 = (float)(uint)pfVar2[7] + pfVar2[-1] + pfVar2[2];
            uVar1 = (ulonglong)ROUND(fVar3);
            local_8 = (float)uVar1;
            pfVar2[7] = local_8;
            pfVar2[2] = fVar3 - (float)(uVar1 & 0xffffffff);
            if ((uint)local_8 < (uint)param_1) {
              pfVar2[7] = param_1;
            }
          }
        }
      }
      if (pfVar2[3] == 0.0) {
        pfVar2[0x11] = 0.0;
      }
      if (pfVar2[0x11] != 0.0) {
        return;
      }
    }
    uVar4 = uVar4 + 1;
    pfVar2 = pfVar2 + 0x1b;
    if (0x7f < uVar4) {
      return;
    }
  } while( true );
}

