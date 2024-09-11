call plug#begin() "installing plugins
Plug 'Valloric/YouCompleteMe'
Plug 'scrooloose/nerdtree', { 'on': 'NERDTreeToggle' }
Plug 'jiangmiao/auto-pairs'
Plug 'tpope/vim-fugitive'
Plug 'airblade/vim-gitgutter'
call plug#end()
set number "line numbers
set hls "search highlighting
set is "ignore case
set incsearch "first match highlighting
syntax on "code highlighting
map <C-n> :NERDTreeToggle<CR> 
"mapping Ctrl-n to run nerdtree
