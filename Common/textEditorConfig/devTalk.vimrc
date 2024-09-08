call plug#begin() "installing plugins
Plug 'scrooloose/nerdtree', { 'on': 'NERDTreeToggle' }
call plug#end()
set number "line numbers
set hls "search highlighting
set is "ignore case
set incsearch "first match highlighting
syntax on "code highlighting
map <C-n> :NERDTreeToggle<CR> 
"mapping Ctrl-n to run nerdtree
