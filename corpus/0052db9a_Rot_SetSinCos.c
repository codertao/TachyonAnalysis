
/* (sc@ESI) copy 6 floats to the current-rotation sin/cos globals 0x668f98 (was
   copy_mathresult_to_global) */

void __cdecl Rot_SetSinCos(float *sc)

{
  GLBL_fvec3_rotB.x = (int)*sc;
  GLBL_fvec3_rotB.y = (int)sc[1];
  GLBL_fvec3_rotB.z = (int)sc[2];
  GLBL_fvec3_rotA.x = (int)sc[3];
  GLBL_fvec3_rotA.y = (int)sc[4];
  GLBL_fvec3_rotA.z = (int)sc[5];
  return;
}

