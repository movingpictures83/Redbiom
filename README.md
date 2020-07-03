# Redbiom
# Language: C++
# Input: TXT
# Output: TXT
# Tested with: PluMA 1.1, GCC 4.8.4
# Dependency: Redbiom 0.3.5

PluMA plugin to query the Earth Microbiome Project (EMP, Thompson et al 2017) database use the tool Redbiom (McDonald et al, 2019).  The plugin is counting on redbiom to be in the system PATH.

The plugin expects as input a set of redbiom commands, one per line.  The redbiom keywords "fetch", "search", "select" and "summarize" are recognized and passed to the redbiom tool while running.

No output file is required, though commands in the input file may generate output along the way.

