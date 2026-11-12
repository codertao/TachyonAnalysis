
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: perspective-divide one camera-space vertex into the batch vertex buffer (0x28 bytes:
   sx,sy,z,rhw,col,spec,uv...) */

void Pipe_ProjectVertex(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float *pfVar7;
  
  iVar5 = DAT_006c8f68;
  pfVar7 = DAT_006b0f44;
  fVar4 = 1.0 / param_1[2];
  fVar1 = param_1[6];
  param_1[8] = DAT_00564e44;
  *(short *)((int)param_1 + 0x1e) = (short)iVar5;
  pfVar7[4] = param_1[5];
  pfVar7[5] = (float)((uint)fVar1 ^ 0xff000000);
  fVar1 = param_1[4];
  fVar2 = param_1[9];
  fVar3 = param_1[10];
  pfVar7[6] = param_1[3];
  pfVar7[7] = fVar1;
  pfVar7[8] = fVar2;
  pfVar7[9] = fVar3;
  fVar6 = _DAT_006b0830;
  iVar5 = DAT_00564ae4;
  DAT_006c8f68 = DAT_006c8f68 + 1;
  DAT_006b0f44 = DAT_006b0f44 + 10;
  fVar3 = (float)_DAT_006b0834;
  fVar1 = param_1[1];
  *pfVar7 = *param_1 * fVar3 * fVar4 + _DAT_006b082c;
  fVar2 = _DAT_0055f238 * fVar4;
  pfVar7[1] = fVar6 - fVar1 * fVar3 * fVar4;
  pfVar7[3] = fVar2;
  if (iVar5 == 0) {
    fVar2 = (fVar2 * _DAT_0055f204 - _DAT_0055f23c * param_1[2]) + _DAT_0055f208;
  }
  else {
    fVar2 = fVar2 * _DAT_0055f200;
  }
  pfVar7[2] = fVar2;
  fVar2 = DAT_0055f1fc;
  fVar1 = pfVar7[2];
  if ((int)DAT_0055f1f8 <= (int)fVar1) {
    pfVar7[2] = DAT_0055f1f8;
  }
  if ((int)fVar1 <= (int)fVar2) {
    pfVar7[2] = fVar2;
  }
  return;
}

