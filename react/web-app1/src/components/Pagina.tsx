import {PropsWithChildren} from 'react';
import Header from "@/components/Header";
import Footer from "@/components/Footer";
import Menu from '@/components/Menu';

const Pagina = ( props : PropsWithChildren ) => {
    return (
        <div {...props}>
            <Header/>
            <div className="flex">
                <Menu/>
                {props.children}
            </div>
            <Footer/>
        </div>
    );
}

export default Pagina;