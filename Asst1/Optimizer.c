/*
 *********************************************
 *  314 Principles of Programming Languages  *
 *  Spring 2017                              *
 *  Author: Ulrich Kremer                    *
 *  Student Version                          *
 *********************************************
 */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "InstrUtils.h"
#include "Utils.h"


void removeNonCritical(Intruction *head){
   
    Instruction *intsr = head;
    Instruction *p = head->prev;
    
    for(;instr !=null; instr = instr->next){
        if(instr-> critical != '1'){
            if(p != NULL){
                p->next = instr->next;
                free(instr);
                instr = p->next;
            } else {
                instr = instr->next;
                p = instr->prev;
                free(p);
            }
        }else{
            p = instr;
            instr = instr->next;
        }
        
    }
    
}

int main()
{
	Instruction *head;

	head = ReadInstructionList(stdin);
	if (!head) {
		WARNING("No instructions\n");
		exit(EXIT_FAILURE);
	}

	/* YOUR CODE GOES HERE */
    
    Instruction *instr;
    Instruction *tmp
    instr = LastInstruction(head);
    
    
    //for(;instr !=null; instr = instr->prev){
    while(instr != null){
        
        switch (instr -> OpCode) {
            case LOADI:
                if(instr -> field1){
                    
                
                }
                
            case LOADAI:
                
                
            case STOREAI: // write
                instr -> critical = '1';
                tmp = instr;
                while(tmp!=NULL){
                    switch (tmp->OpCode){
                            case S
                    }
                }
            
                
            case OUTPUTAI: // read
                instr -> critical = '1';
                
                
            default:
                break;
        }
        instr = instr ->prev
    }
    
    
    

	if (head) 
		PrintInstructionList(stdout, head);
	
	return EXIT_SUCCESS;
}

