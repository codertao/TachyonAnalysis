
/* sweep: "DLG ENGINE BUFFER"/"PEND LINES" */

Pool * Dialog_InitQuadQueue(void)

{
  Pool *local_4;
  
  Mem_AllocZeroTagged(&local_4,0x38,4,s_DLG_ENGINE_BUFFER_00535880,0xd000);
  Pool_Init(local_4,0x40,0x30,0x535874,0xd000);
  return local_4;
}

