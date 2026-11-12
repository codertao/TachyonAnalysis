
/* refine: op 62, play segment (u8) and yield */

undefined8 __fastcall MusOp_PlaySegment8(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  byte *unaff_ESI;
  
  bVar1 = *unaff_ESI;
  Music_PlaySegment((uint)bVar1);
  return CONCAT44(param_2,(uint)bVar1);
}

