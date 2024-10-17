import './App.css';
import {Container, Typography} from '@mui/material'
import { ThemeProvider } from '@mui/material/styles';
import { useTheme } from '@mui/material/styles';
import Order from 'components/order';

function App() {
  const theme = useTheme();

  return (
    <ThemeProvider theme={theme}>
      <Container>
        <Typography font>
          App Restaurant
        </Typography>
        <Order/>
      </Container>
    </ThemeProvider>
  );
}

export default App;
