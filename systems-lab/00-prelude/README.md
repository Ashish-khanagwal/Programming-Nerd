# systems-lab

## Why this repo exists

This repository exists to train me to **think and build like a systems programmer**.

Not to follow tutorials.  
Not to chase frameworks.  
Not to collect half-understood projects.

The goal of this lab is to develop **first-principles understanding** of:

- memory ownership and lifetime
- operating system abstractions
- compilers and language runtimes
- low-level tools (shells, terminals, debuggers, version control)

Everything here is built **from scratch**, slowly, with intent.

This repo is a _laboratory_, not a portfolio.

---

## Learning rules (non-negotiable)

1. **Read → Build → Debug → Reflect**
   - Reading without building is useless
   - Building without debugging is shallow
   - Debugging without reflection is wasted pain

2. **Depth > Speed**
   - I do not rush milestones
   - I do not skip confusion
   - I do not move on until the mental model is clear

3. **Memory ownership must be explicit**
   - Who allocates?
   - Who frees?
   - What happens on failure?

4. **No abstraction without understanding**
   - If I can’t explain the memory layout, I don’t use the abstraction

5. **Tools are part of learning**
   - Valgrind, ASAN, gdb are mandatory, not optional

6. **Code is secondary to understanding**
   - Clean code matters
   - Correct mental models matter more

---

## Roadmap (brief)

This lab follows a structured progression:

1. **C & Memory Foundations**
   - Heap, pointers, realloc, ownership
   - Manual data structures
   - Failure-driven learning

2. **Low-Level Data Structures**
   - Linked lists, stacks, queues
   - Sorting and recursion at memory level
   - File formats and binary data

3. **Operating Systems**
   - Processes, virtual memory, syscalls
   - Shells and process control
   - OS interfaces from user space

4. **OS Internals**
   - Memory allocators
   - Scheduling and file systems (conceptual + practical)
   - Process introspection

5. **Compilers & Runtimes**
   - Lexing, parsing, ASTs
   - Interpreters and bytecode VMs
   - Runtime memory behavior

6. **Compiler Backend & Toolchain**
   - IR, code generation
   - Linking, symbols, object files

7. **Systems Tools (parallel track)**
   - Shells, terminals, debuggers
   - Version-control internals
   - Process and memory inspection tools

The **full, living roadmap** is maintained in Notion:

👉 **Roadmap Link:**  
https://www.notion.so/C-OS-Compiler-Tools-Languages-6-Month-2ee64e3ac50e80f4addfd489ab649a15?source=copy_link

This repository mirrors that roadmap in code.

---

## Warning to my future self

> **Do not rush. Depth over speed.**

If something feels confusing:

- that is the point
- slow down
- re-read
- rebuild

If something feels easy:

- check if you truly understand it
- explain it without code

This lab is not about finishing fast.  
It is about becoming _capable_.

---

## Final note

If you’re reading this months or years later:

- Respect the process
- Don’t optimize prematurely
- Don’t chase novelty
- Trust fundamentals

Serious systems work is built one correct mental model at a time.
